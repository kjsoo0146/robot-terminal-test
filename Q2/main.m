clc;
clear all;
close all;

cd '.\model';
myRobot_2dof = importrobot('open_manipulator_2DOF.urdf.xacro');
myRobot_2dof.DataFormat = 'column';
gravityVec = [0; 0; -9.80665];
myRobot_2dof.Gravity = gravityVec;
cd ..;
Tsim = 20
Kp = 100;
Kd = 14;
result = sim("CTM_DOB.slx")

ref(:,:) = result.ref(:,1,:);
ref_dot(:,:) = result.ref_dot(:,1,:);
ref_ddot(:,:) = result.ref_ddot(:,1,:);
q = result.q';
qdot = result.qdot';
time = result.time';
torque(:,:) = result.torque(:,1,:);


figure(1)
hold on
grid
plot(time, ref(1,:), 'b-')
plot(time, ref(2,:), 'b--')

plot(time, q(1,:), 'r-')
plot(time, q(2,:), 'r--')

plot(time, ref(1,:)-q(1,:), 'k-')
plot(time, ref(2,:)-q(2,:), 'k--')

legend('$ref_1$','$ref_2$','$q_1$','$q_2$','$error_1$','$error_2$','Interpreter','latex')
xlabel('time (sec)')
ylabel('rad')

figure(2)
hold on
grid
plot(time, ref_dot(1,:), 'b-')
plot(time, ref_dot(2,:), 'b--')

plot(time, qdot(1,:), 'r-')
plot(time, qdot(2,:), 'r--')

plot(time, ref_dot(1,:)-qdot(1,:), 'k-')
plot(time, ref_dot(2,:)-qdot(2,:), 'k--')

legend('$refdot_1$','$refdot_2$','${q}dot_1$','$qdot_2$','$error_1$','$error_2$','Interpreter','latex')
xlabel('time (sec)')
ylabel('rad')

figure(3)
hold on
grid
plot(time, torque(1,:), 'b-')
plot(time, torque(2,:), 'r')
#pragma config(UserModel, "C:/Users/rstudent/code/39z-starstruck/39zconfig.c")
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma platform(VEX2)

#pragma competitionControl(Competition)

#include "Vex_Competition_Includes.c"

void pre_auton()
{
	bStopTasksBetweenModes = true;
	SensorValue(clawSolenoid) = 0;
}

task autonomous()
{
	AutonomousCodePlaceholderForTesting();
}

task usercontrol()
{

	while (true)
	{
		SensorValue(clawSolenoid) = vexRT[Btn5D] ? !SensorValue(clawSolenoid) : SensorValue(clawSolenoid);
		delay(300);
	}
}

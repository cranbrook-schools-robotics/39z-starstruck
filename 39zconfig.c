#pragma config(UART_Usage, UART1, uartVEXLCD, baudRate19200, IOPins, None, None)
#pragma config(UART_Usage, UART2, uartNotUsed, baudRate4800, IOPins, None, None)
#pragma config(I2C_Usage, I2C1, i2cSensors)
#pragma config(Sensor, in1,    pPowerExp,      sensorAnalog)
#pragma config(Sensor, in2,    leftPot,        sensorAnalog)
#pragma config(Sensor, in3,    rightPot,       sensorPotentiometer)
#pragma config(Sensor, in4,    gyro,           sensorGyro)
#pragma config(Sensor, in5,    autoSelection,  sensorPotentiometer)
#pragma config(Sensor, dgtl1,  clawSolenoid,   sensorDigitalOut)
#pragma config(Sensor, dgtl12, initIndicator,  sensorLEDtoVCC)
#pragma config(Sensor, I2C_1,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_2,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_3,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_4,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Motor,  port2,           lBack,         tmotorVex393_MC29, openLoop, reversed, encoderPort, I2C_1)
#pragma config(Motor,  port3,           lFront,        tmotorVex393_MC29, openLoop, reversed, encoderPort, I2C_2)
#pragma config(Motor,  port4,           lLiftT,        tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port5,           rLiftB,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           rLiftT,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           lLiftB,        tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port8,           rBack,         tmotorVex393_MC29, openLoop, reversed, encoderPort, I2C_4)
#pragma config(Motor,  port9,           rFront,        tmotorVex393_MC29, openLoop, reversed, encoderPort, I2C_3)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{



}

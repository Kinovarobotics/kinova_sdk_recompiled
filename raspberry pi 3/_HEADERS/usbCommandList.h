/*
 * \file usbCommandList.h
 *
 *  \brief This files contains the USB commands list.
 
 *  Created on: 2014-07-24
 *
 *  \Author: Simon Latour
 *
 *  \version 1.0
 */
 
 
enum UsbCommandEnum 
{

  eSetClientConfig = 0,									// That command send a new CClientConfiguration to Jaco.
	eGetClientConfig = 1,									// That command ask to get the current CCLientConfiguration in Jaco.
	eSetArmConfig  = 2,										// That command send a new arm configuration to Jaco.
	eGetArmConfig = 3,										// That command ask to get the current arm configuration in Jaco.
	eAddPreDefinedPosition = 4,								// That command add a pre-defined position to Jaco.
	eModifyPredefinedPosition = 5,							// That command modify a pre-defined position.
	eGetPredefinedPosition = 6,								// That command ask to get a pre-defined position.
	eSetJoystickPosition = 7,								// That command send a new joystick position to Jaco.
	eSetMove = 8,											//
	eSetControlMode  = 9,									// That command send a new control mode to Jaco.  //Non utilisé a partir de 3.6.9
	eGetControlMode = 10,									//
  eSetOperator = 11,										// That command send a new operator to Jaco//Non utilisé a partir de 3.6.9
	eProgramFlash = 12,										// That command program the Jaco's flash memory.
	eEraseFlash = 13,										// That command erase the Jaco's flash memory.
	eSetJointZero = 14,										// This command tells that the joints actual position is the zero position.
	eGetJointPositions = 15,									// That command ask to get the position from all Joints in Jaco.
	eGetModularAxeValue = 16,								// Non utilisé a partir de 3.6.9
	eGetParamFromJaco = 17,									//
	eGetJointConfig = 19,									// That command ask to get the joint configuration.
	eSetJointConfig = 20,									// That command send a new joitn configuration.
	eGetErrorLog = 21,										// That command ask to get the error log in Jaco.
	eGetLogPosition = 22,									// That command ask to get the position log in Jaco.
	eGetLogErrorQuantity = 23,								// That command ask to get the quantity of error in the error log.
	eGetLogPositionQuantity = 24,							// That command ask to get the quantity of position in the position log.
	eDeleteLogError = 25,									// That command delete the error log.
	eSetJoystickDefaultFunctionnalityMappingChart = 26,		// That command set the default joystick mapping chart.
  eGetJoystickDefaultFunctionnalityMappingChart = 27,		// That command ask to get the joystick default mapping chart.
  eSetJoystickCustomFunctionnalityMappingChart = 28,		// That command send a new joystick custom configuration to Jaco.
  eGetJoystickCustomFunctionnalityMappingChart = 29,		// That command ask to get a joystick custom configuration.
  eSetActivatedJoystickFunctionnalityMappingChart = 30,	// That command activate a joystick funtionnality mapping chart in Jaco.
  eGetActivatedJoystickFunctionnalityMappingChart = 31,	// That command ask to get the activation status from a joystick functionnality mapping chart in Jaco.
  eSetRetractAngle = 32,									// That command set the retracted position's angle in Jaco.
  eGetRetractAngle = 33,									// That command ask to get the retracted position's angle
  eSetArmLaterality = 34,									// That command set the Jaco's laterality.
	eGetArmLaterality = 35,									// That command ask to get the Jaco's laterality.
	eGetCodeVersion = 36,									// That command ask to get the DSP's code version.
	eDeleteProtectionZoneList = 37,							// That command delete the protection zone list.
	eSetProtectionZoneList = 38,								// That command set the protection zone list.
	eGetProtectionZoneList = 39,								// That command ask to get the protection zone list.
	eSetControlMappingCharts = 40,							// That command send a new mapping chart to jaco
	eGetControlMappingCharts = 41,							// That command ask to get the current mapping chart in Jaco.
	eGetArmPosition 			= 44,							// That command ask to get the current arm position.
	eRestorFactorySettings 	= 45,							// That command restore the factory default configuration of Jaco.
	eGetArmPosition_cartesian= 46,							// NOT USED
	eSetArmAngularControl 	= 47,							// That command set the control mode to ANGULAR.
	eGetControlMapping 		= 48,							// That command ask to get a specified control mapping inside the actual control mapping chart.
	eSetArmCartesianControl 	= 49,							// That command set the control mode to Cartesian.
	eloadLogErrors 			= 50,							// This command loads the error log from flash memory into RAM to download it using GetErrorLog
	eloadLogPosition 		= 51,							// This command loads the position log from flash memory into RAM to download it using GetLogPosition
	eSetActuatorAddress 		= 52,							// This command is used to modify the actuator address
	eSetActuatorPID 			= 53,							// This command sets the PID values of a single actuator
	eSetActuatorPIDFilter = 54,
	eSetActuatorTorqueSensorZero = 55,
	eSetActuatorTorqueSensorGain = 56,
	eStartForceControl 			= 57,
	eStopForceControl 			= 58,
	eStartCurrentLimitation 		= 59,
	eStopCurrentLimitation 		= 60,

	eSetSerialNumber				= 61,						// This command enables the production to set the serial number
	eGetQuickStatus				= 62,						// This functions returns basic status information
	eSetForceControl				= 63,						// This function enables to activate/deactivate force control
	eSetFrameType				= 64,						// This functions sets the Frame type for cartesian control
	eSetModelNumber				= 65,						// This command enables the production to set the Model number
	eSetRobotConfiguration		= 66,

	//System information commands
	eReadValuesInterface 			= 100,
	eObtenirPeripheralInformations 	= 101,
	eGetSystemStatusInformation 		= 102,
	eGetGripperStatusInformation 	= 103,					// This command sends information on the gripper
	eGetCartesianPositionningInfo 	= 104,					// This command sends the Cartesian position information (quick command)
	eGetAngularPositionningInfo 		= 105,					// This command sends the Angular position information (quick command)
	eGetCartesianCommandInfo 		= 106, 					// This command sends the Cartesian command information (quick command)
	eGetAngularCommandInfo 			= 107,					// This command sends the angular command information (quick command)
	eGetCartesianForceInfo 			= 108,					// This command sends the Cartesian force information (quick command)
	eGetAngularForceInfo 			= 109,					// This command sends the angular force information (quick command)
	eGetCurrentInfo 					= 110,					// This command sends the joints current information (quick command)
	eGetSensorsInfo 					= 111,					// This command sends the joints sensors information (quick command)
	eGetPositionCurrentActuator 		= 112,					// This command sends the joints sensors information (quick command)
	eGetCurrentMotorInfo 			= 113,					// This command sends the joints sensors information (quick command)
	eGetAngularVelocityInfo 			= 114,					// This command sends the joints sensors information (quick command)

	eGetAllForcesInfo 			    = 115,
	eGetAngularForceGravityFreeInfo 	= 116,					// This command sends the angular force information (quick command)
	eGetActuatorAcceleration			= 117,
	eValidateCartesianTransition		= 118,
	eSetActuatorMaxVelocity 			= 119,
	eGetJoystickValue 				= 120,

	eGetRobotIdentity				= 121,
	eGetSystemLimits					= 122,
	eGetCommandVelocity				= 123,


	//Diagnostic commands
	eObtenirRealTimePositions 		= 200,
	eObtenirActualPositionsSelector 	= 201,
	eDefinirActualPositionsSelector 	= 202,
	eReadFlash 						= 203,

	eWriteTrajectory                 = 300,
	eEraseTrajectory                 = 301,
	eStartControlAPI                 = 302,
	eStopControlAPI       			= 303,
	eGetInfoFIFOTrajectory           = 304,
	eExecuteJoystickFunctionnalities = 305,
	eGetControlOperator              = 306,
	eGetActualTrajectoryInfo			= 307,
	eWriteBasicTrajectory			= 308,					// This command is used to send a trajectory without limitations
	eGetSingularityVector			= 310,					// This command sends the singularity vector
	eGotoHome                        = 311,                  // This command move the robot to the ready position

	//Test commands
	eExecuteJacoTest = 400,
	eGetJacoTestStatus = 401,
	eStopExecutionOfJacoTest = 402,
	eGetPeripheralInventory = 403,

	eSetCartesianForceMinMax = 500,
	eSetCartesianInertiaDamping = 501,
	eSetAngularForceMinMax = 502,
	eSetAngularInertiaDamping = 503,
	eSetSpasmFilterValues = 504,
	eGetSpasmFilterValues = 505,
	eSetEndEffectorOffsetValues = 506,
	eGetEndEffectorOffsetValues = 507,

	eSendPeripheralBootloader = 600,

	eGetConnor = 666,


	eSendAngularTorqueCommand 			= 1000, // DONE 1
	eSendForceCommand 					= 1001,
	eSetTorqueActuatorGain 				= 1002, // DONE 1
	eSetTorqueActuatorDamping  			= 1003, // DONE 1
	eSwitchTrajectoryTorque 				= 1004, // DONE
	eSetTorqueCommandMax 				= 1005,
	eSetTorqueSafetyFactor 				= 1006, // DONE
	eSetTorqueGainMax 					= 1007,
	eSetTorqueRateLimiter 				= 1008,
	eSetTorqueFeedCurrent 				= 1009,
	eSetTorqueFeedVelocity 				= 1010,
	eSetTorquePosLimDampingGain 			= 1011,
	eSetTorquePosLimDampingMax 			= 1012,
	eSetTorquePosLimRepulsGain 			= 1013,
	eSetTorquePosLimRepulsMax 			= 1014,
	eSetTorqueFilterVelocity 			= 1015,
	eSetTorqueFilterMeasuredTorque 		= 1016,
	eSetTorqueFilterError 				= 1017,
	eSetTorqueFilterControlEffort 		= 1018,
	eSetGravityType 						= 1019, // DONE
	eSetGravityVector 					= 1020, // DONE
	eSetGravityOptimalZParam 			= 1021, // DONE
	eSetGravityManualInputParam 			= 1022,
	eGetAngularTorqueCommand 			= 1023,
	eGetAngularTorqueGravityEstimation 	= 1024,
	eSetTorqueSwitchTreshold 			= 1025,
	eSetTorquePositionLimitDistance 		= 1026,
	eSetTorqueControlType 				= 1027,
	eSetGravityPayload					= 1028, // DONE
	eSetTorqueVibrationController		= 1029,
	eSetTorqueRobotProtection			= 1030,
  eSetTorqueVelocityLimitFilter		= 1031,
  eSetTorqueFeedFilter					= 1032,
  eSetTorqueStaticFriction				= 1033,
  eSetTorqueErrorDeadband				= 1034,
    eSetTorqueBrake						= 1035,
    eSetTorqueInactivityTime				= 1036,
    eGetTrajectoryTorqueMode				= 1043,



	eSetOpenComm = 700,

	eSetWriteDevelopmentValues = 5000,
	eGetReadDevelopmentValues = 5001,

  eNackError                = 9999
};

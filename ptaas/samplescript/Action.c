//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("01_LaunchApp");
	truclient_step("1", "Navigate to 'http://google.com/'", "snapshot=Action_1.inf");
	lr_end_transaction("01_LaunchApp",0);
	truclient_step("3", "Wait 3 seconds", "snapshot=Action_3.inf");
	lr_start_transaction("02_Search");
	truclient_step("4", "Type India in Search combobox", "snapshot=Action_4.inf");
	truclient_step("5", "Press key Enter on Search combobox", "snapshot=Action_5.inf");
	lr_end_transaction("02_Search",0);

	return 0;
}

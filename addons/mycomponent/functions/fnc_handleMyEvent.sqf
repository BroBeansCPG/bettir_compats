#include "..\script_component.hpp" // Include global macros.
/*
	Author: flufflesamy

	Description:
		Handles QGVAR(myEvent) event.

	Parameter(s):
		0: Message <STRING>

	Returns:
		Nothing.

	Examples:
		[arg] call TUT_mycomponent_fnc_handleMyEvent
*/

params ["_message"];

hint format ["myEvent fired! Message: %1", _message];

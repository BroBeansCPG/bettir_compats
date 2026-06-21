#include "..\script_component.hpp" // Include global macros.
/*
	Author: flufflesamy

	Description:
		<function description>

	Parameter(s):
		0: ARG 0 <TYPE>

	Returns:
		0: RETURN <TYPE>

	Examples:
		[arg] call TUT_mycomponent_fnc_myFunction
        Within same component: [arg] call FUNC(myFunction)
        Within same addon: [arg] call EFUNC(myComponent,myFunction)
*/

params ["_arg"];
TRACE_1("myFunction",_arg); // CBA logging macro. Displays only when DEBUG_MODE_FULL is defined.

if (isNil "_arg1") exitWith {
    ERROR_1("Argument %1 cannot be nil!",_arg); // CBA error logging macro.
};

// [EventName, Args] Raises local CBA XEH event.
[QGVAR(myEvent), _arg] call CFUNC(localEvent);

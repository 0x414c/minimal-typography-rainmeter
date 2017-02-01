[Rainmeter]
@include=#@#/VAR.ini
;60000ms == 1m
Update=60000
ContextTitle2="Edit MAIN"
ContextAction2=["#@#/MAIN/HDD.inc"]
LeftMouseUpAction=[#CurrentDrive#]
MouseOverAction=!Execute [!HideMeter Mstring][!ShowMeter Mstring2][!redraw]
MouseLeaveAction=!Execute [!HideMeter Mstring2][!ShowMeter Mstring][!redraw]

[mDriveLabel]
Measure=FreeDiskSpace
Drive=#CurrentDrive#
Label=1
Update=-1

[mDriveSpace]
Measure=FreeDiskSpace
;InvertMeasure=1
Drive=#CurrentDrive#

[Mtitle]
Meter=String
MeasureName=mDriveLabel
MeterStyle=Style1
Text="%1 (#CurrentDrive#)"

[Mstring]
X=[Mtitle:W]
DynamicVariables=1
Meter=String
MeterStyle=Style2
MeasureName=mDriveSpace
Text="%1% free"
Percentual=1
NumOfDecimals=1

[Mstring2]
X=r
Meter=String
MeterStyle=Style2
MeasureName=mDriveSpace
Text="%1 GiB free"
;1 Gibibyte is 1073741824 Bytes
Scale=1073741824
NumOfDecimals=1
Group=Hidden | Hide
Hidden=1
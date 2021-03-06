[Rainmeter]
@include=#@#/settings.ini
;; 60000ms is 1m.
Update=60000
ContextTitle2="Edit main"
ContextAction2=["#@#/Main/HDD.inc"]
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
;; 1 gibibyte is 1073741824 bytes.
Scale=1073741824
NumOfDecimals=1
Group=Hidden | Hide
Hidden=1

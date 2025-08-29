-[AMPCapacityBarViewController isCalculating]
bool __cdecl -[AMPCapacityBarViewController isCalculating](AMPCapacityBarViewController *self, SEL a2)
{
  AMPCapacityBarView *v3; // x19
  unsigned __int8 v4; // w20

  if ( !(unsigned int)-[AMPCapacityBarViewController isViewLoaded](self, "isViewLoaded") )
    return 1;
  v3 = objc_retainAutoreleasedReturnValue(-[AMPCapacityBarViewController capacityBar](self, "capacityBar"));
  v4 = -[AMPCapacityBarView isCalculating](v3, "isCalculating");
  objc_release(v3);
  return v4;
}
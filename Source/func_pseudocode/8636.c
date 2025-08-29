-[MXMTargetQueue checkQuiesced:]
bool __cdecl -[MXMTargetQueue checkQuiesced:](MXMTargetQueue *self, SEL a2, double a3)
{
  _BOOL4 v5; // w20
  double v6; // d0
  double v7; // d9
  double v8; // d0
  double v9; // d9
  unsigned int v10; // w8

  if ( -[MXMTargetQueue majorityHalfTargetsHit](self, "majorityHalfTargetsHit") )
  {
    if ( -[MXMTargetQueue majorityTargetsHit](self, "majorityTargetsHit") )
    {
      v5 = 1;
    }
    else
    {
      -[MXMTargetQueue average](self, "average");
      v7 = v6;
      -[MXMTargetQueue target](self, "target");
      v5 = v7 <= v8;
    }
  }
  else
  {
    v5 = 0;
  }
  v9 = (double)-[MXMTargetQueue size](self, "size");
  v10 = -[MXMTargetQueue full](self, "full") && v5;
  if ( v9 <= a3 )
    return v10;
  else
    return 0;
}
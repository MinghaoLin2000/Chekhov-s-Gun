-[MXMTargetQueue majorityTargetsHit]
bool __cdecl -[MXMTargetQueue majorityTargetsHit](MXMTargetQueue *self, SEL a2)
{
  double v3; // d8

  v3 = (double)-[MXMTargetQueue targetHits](self, "targetHits");
  return (double)-[MXMTargetQueue size](self, "size") * 0.5 <= v3;
}
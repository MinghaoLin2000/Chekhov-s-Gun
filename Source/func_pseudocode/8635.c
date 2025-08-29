-[MXMTargetQueue majorityHalfTargetsHit]
bool __cdecl -[MXMTargetQueue majorityHalfTargetsHit](MXMTargetQueue *self, SEL a2)
{
  double v3; // d8

  v3 = (double)-[MXMTargetQueue halfTargetHits](self, "halfTargetHits");
  return (double)-[MXMTargetQueue size](self, "size") * 0.25 <= v3;
}
__ZN3TSP11FeatureInfoD0Ev
void __fastcall TSP::FeatureInfo::~FeatureInfo(TSP::FeatureInfo *this)
{
  __int64 v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  TSP::FeatureInfo::~FeatureInfo(this);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1, 0x1081C408AA6B6D1LL);
}
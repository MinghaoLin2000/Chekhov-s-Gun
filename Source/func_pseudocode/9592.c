__ZN3TSP12SnappySourceD2Ev
void __fastcall TSP::SnappySource::~SnappySource(id *this)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_release(this[4]);
  objc_release(this[1]);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  snappy::Source::~Source((snappy::Source *)this);
}
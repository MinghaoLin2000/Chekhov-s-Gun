__ZN9serialize5Stage9serializeERNS_10SerializerE
void __fastcall serialize::Stage::serialize(serialize::Stage *this, serialize::Serializer *a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  serialize::Prim::serialize(this, a2);
  serialize::Serializer::sync((unsigned __int8 *)a2, "defaultPrim", (std::string *)((char *)this + 64));
  serialize::Serializer::sync(a2, "metersPerUnit", (float *)this + 22);
  serialize::Serializer::sync(a2, "startTimeCode", (int *)this + 23);
  serialize::Serializer::sync(a2, "endTimeCode", (int *)this + 24);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  serialize::Serializer::sync(a2, "timeCodesPerSecond", (int *)this + 25);
}
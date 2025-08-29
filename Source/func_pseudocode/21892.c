__ZN9serialize6Shader9serializeERNS_10SerializerE
void __fastcall serialize::Shader::serialize(serialize::Shader *this, serialize::Serializer *a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  serialize::Prim::serialize(this, a2);
  serialize::Serializer::sync((unsigned __int8 *)a2, "inputName", (int *)this + 16);
  serialize::Serializer::sync(a2, "scale", (float *)this + 17);
  serialize::Serializer::sync(a2, "bias", (float *)this + 21);
  serialize::Serializer::sync((unsigned __int8 *)a2, "file", (std::string *)((char *)this + 104));
  serialize::Serializer::sync((unsigned __int8 *)a2, "channels", (std::string *)((char *)this + 128));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  serialize::Serializer::sync((unsigned __int8 *)a2, "texCoordSet", (std::string *)((char *)this + 152));
}
__ZN9serialize4Mesh9serializeERNS_10SerializerE
void __fastcall serialize::Mesh::serialize(serialize::Mesh *this, serialize::Serializer *a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  serialize::Prim::serialize(this, a2);
  serialize::Serializer::sync((__int64)a2, "faceVertexCounts", (__int64)this + 64);
  serialize::Serializer::sync((__int64)a2, "indices", (__int64)this + 88);
  serialize::Serializer::sync((__int64)a2, "uvIndices", (__int64)this + 112);
  serialize::Serializer::sync((__int64)a2, "normalIndices", (__int64)this + 136);
  serialize::Serializer::sync((__int64)a2, "vertices", (__int64)this + 160);
  serialize::Serializer::sync((__int64)a2, "normals", (__int64)this + 184);
  serialize::Serializer::sync((__int64)a2, "colors", (__int64)this + 208);
  serialize::Serializer::sync((__int64)a2, "uvs", (__int64)this + 232);
  serialize::Serializer::sync((unsigned __int8 *)a2, "normalInterpolation", (int *)this + 64);
  serialize::Serializer::sync((unsigned __int8 *)a2, "colorInterpolation", (int *)this + 65);
  serialize::Serializer::sync((unsigned __int8 *)a2, "uvInterpolation", (int *)this + 66);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  serialize::Serializer::sync((unsigned __int8 *)a2, "materialPath", (std::string *)((char *)this + 272));
}
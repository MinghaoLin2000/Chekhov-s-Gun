__ZN15fileFormatUtils8Material23updateSerializeMaterialEPN9serialize3MatEPNS1_5StageE
__int64 __fastcall fileFormatUtils::Material::updateSerializeMaterial(
        fileFormatUtils::Material *this,
        serialize::Mat *a2,
        serialize::Stage *a3)
{
  __int64 v6; // x22
  __int64 result; // x0

  fileFormatUtils::Material::_makeTextureShaderNames(this);
  v6 = 0LL;
  do
  {
    result = fileFormatUtils::Material::_addMapToSerializeMaterial(this, v6, a2, a3);
    v6 = (unsigned int)(v6 + 1);
  }
  while ( (_DWORD)v6 != 7 );
  return result;
}
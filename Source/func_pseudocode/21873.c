__ZN15fileFormatUtils5Asset9initStageEv
__int64 __fastcall fileFormatUtils::Asset::initStage(fileFormatUtils::Asset *this)
{
  char *v2; // x20

  v2 = (char *)operator new(0x68uLL);
  sub_1000099D8();
  *(_QWORD *)this = v2;
  std::string::operator=((std::string *)(v2 + 64), (const std::string *)((char *)this + 8));
  return *(_QWORD *)this;
}
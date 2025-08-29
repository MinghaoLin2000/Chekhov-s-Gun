__ZN25SandboxExtensionContainerD2Ev
void __fastcall SandboxExtensionContainer::~SandboxExtensionContainer(SandboxExtensionContainer *this)
{
  void *v2; // x0
  SandboxExtensionContainer *v3; // [xsp+8h] [xbp-18h] BYREF

  SandboxExtensionContainer::ResetSandbox(this);
  v2 = (void *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    *((_QWORD *)this + 4) = v2;
    operator delete(v2);
  }
  v3 = this;
  std::vector<std::string>::__destroy_vector::operator()[abi:ne180100](&v3);
}
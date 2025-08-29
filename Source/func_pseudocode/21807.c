__ZN10XpcSandboxD2Ev
void __fastcall XpcSandbox::~XpcSandbox(XpcSandbox *this)
{
  _QWORD *v2; // x20
  _QWORD *v3; // x21

  v2 = (_QWORD *)*((_QWORD *)this + 1);
  v3 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v2 != v3 )
  {
    do
      sandbox_extension_release(*v2++);
    while ( v2 != v3 );
    v2 = (_QWORD *)*((_QWORD *)this + 1);
  }
  if ( v2 )
  {
    *((_QWORD *)this + 2) = v2;
    operator delete(v2);
  }
}
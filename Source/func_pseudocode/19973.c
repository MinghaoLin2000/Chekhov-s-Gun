__ZN38JobRequestAttributes_FromRequestParamsD2Ev
void __fastcall JobRequestAttributes_FromRequestParams::~JobRequestAttributes_FromRequestParams(
        JobRequestAttributes_FromRequestParams *this)
{
  void *v2; // x0
  void *v3; // x0

  *(_QWORD *)this = off_10009C378;
  v2 = (void *)*((_QWORD *)this + 21);
  *((_QWORD *)this + 21) = 0LL;
  objc_release(v2);
  v3 = (void *)*((_QWORD *)this + 22);
  *((_QWORD *)this + 22) = 0LL;
  objc_release(v3);
  objc_release(*((id *)this + 22));
  objc_release(*((id *)this + 21));
  objc_release(*((id *)this + 20));
  objc_release(*((id *)this + 19));
  objc_release(*((id *)this + 18));
  objc_release(*((id *)this + 17));
  objc_release(*((id *)this + 15));
  objc_release(*((id *)this + 14));
  objc_release(*((id *)this + 13));
  objc_release(*((id *)this + 12));
  objc_release(*((id *)this + 11));
  objc_release(*((id *)this + 9));
  objc_release(*((id *)this + 7));
  objc_release(*((id *)this + 6));
  objc_release(*((id *)this + 5));
  objc_release(*((id *)this + 4));
  objc_release(*((id *)this + 2));
}
__ZL22compile_thread_handlerPv
__int64 __fastcall compile_thread_handler(double *a1)
{
  std::chrono::duration<long long, std::ratio<1, 1000000000>>::rep rep; // x20
  __int64 v3; // x21
  __int64 v4; // x0

  rep = std::chrono::steady_clock::now().__d_.__rep_;
  v3 = mlc_model_compile((*(_QWORD *)(*(_QWORD *)a1 + 8LL) - **(_QWORD **)a1) >> 3);
  a1[3] = (double)(std::chrono::steady_clock::now().__d_.__rep_ - rep) / 1000000.0;
  v4 = *((_QWORD *)a1 + 1);
  *((_QWORD *)a1 + 1) = v3;
  if ( v4 )
    (*((void (**)(void))a1 + 2))();
  return 0LL;
}
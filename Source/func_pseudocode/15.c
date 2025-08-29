_main
// local variable allocation has failed, the output may be wrong!
int __fastcall main(int argc, const char **argv, const char **envp)
{
  id v3; // x19

  qword_1000CC1B0 = (__int64)objc_msgSend(
                               objc_allocWithZone((Class)type metadata accessor for ServiceDelegate(
                                                           *(_QWORD *)&argc,
                                                           argv,
                                                           envp)),
                               "init");
  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)objc_opt_self(&OBJC_CLASS___NSXPCListener), "serviceListener"));
  qword_1000CC1B8 = (__int64)v3;
  objc_msgSend(v3, "setDelegate:", qword_1000CC1B0);
  objc_msgSend(v3, "resume");
  return 0;
}
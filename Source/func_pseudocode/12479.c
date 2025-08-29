+[NSObject tsu_overridesSelector:ofBaseClass:]
bool __cdecl +[NSObject tsu_overridesSelector:ofBaseClass:](id a1, SEL a2, SEL a3, Class a4)
{
  Method InstanceMethod; // x21

  InstanceMethod = class_getInstanceMethod((Class)a1, a3);
  return InstanceMethod != class_getInstanceMethod(a4, a3);
}
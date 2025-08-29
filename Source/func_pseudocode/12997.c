-[TSUDescription addSuperDescription]
void __cdecl -[TSUDescription addSuperDescription](TSUDescription *self, SEL a2)
{
  id v3; // x20
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  v4.receiver = objc_loadWeakRetained((id *)&self->_object);
  v4.super_class = class_getSuperclass(self->_class);
  objc_release(v4.receiver);
  v3 = objc_retainAutoreleasedReturnValue(-[TSUDescription description](&v4, "description"));
  -[TSUDescription addFieldValue:](self, "addFieldValue:", v3, v4.receiver, v4.super_class);
  objc_release(v3);
}
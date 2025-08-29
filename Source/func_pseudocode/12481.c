-[NSObject tsu_performSelector:withValue:]
void __cdecl -[NSObject tsu_performSelector:withValue:](NSObject *self, SEL a2, SEL a3, id a4)
{
  NSMethodSignature *v7; // x0
  NSMethodSignature *v8; // x22
  const char *v9; // x24
  NSObject *v10; // x0
  const char *v11; // x1
  const char *v12; // x0
  const char *v13; // x23
  NSInvocation *v14; // x22
  void *v15; // x19
  __int64 v16; // x20
  NSString *v17; // x3
  NSExceptionName v18; // x2
  __int64 v19; // x20
  NSUInteger sizep; // [xsp+18h] [xbp-38h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v7 = -[NSObject methodSignatureForSelector:](self, "methodSignatureForSelector:");
  if ( v7 )
  {
    v8 = v7;
    if ( (void *)-[NSMethodSignature numberOfArguments](v7, "numberOfArguments") == (void *)3 )
    {
      v9 = -[NSMethodSignature getArgumentTypeAtIndex:](v8, "getArgumentTypeAtIndex:", 2LL);
      while ( 2 )
      {
        switch ( *v9 )
        {
          case '@':
            goto LABEL_10;
          case 'A':
          case 'D':
          case 'E':
          case 'F':
          case 'G':
          case 'H':
          case 'J':
          case 'K':
          case 'M':
          case 'P':
          case 'T':
          case 'U':
          case 'W':
          case 'X':
          case 'Y':
          case 'Z':
          case '[':
          case '\\':
          case ']':
          case '_':
          case '`':
          case 'a':
          case 'b':
          case 'e':
          case 'g':
          case 'h':
          case 'j':
          case 'k':
          case 'm':
          case 'p':
            goto LABEL_11;
          case 'B':
            objc_msgSend(a4, "boolValue");
            goto LABEL_36;
          case 'C':
            objc_msgSend(a4, "unsignedCharValue");
            goto LABEL_36;
          case 'I':
            objc_msgSend(a4, "unsignedIntValue");
            goto LABEL_36;
          case 'L':
            objc_msgSend(a4, "unsignedLongValue");
            goto LABEL_31;
          case 'N':
          case 'O':
          case 'R':
          case 'V':
          case 'n':
          case 'o':
          case 'r':
            ++v9;
            continue;
          case 'Q':
            objc_msgSend(a4, "unsignedLongLongValue");
            goto LABEL_31;
          case 'S':
            objc_msgSend(a4, "unsignedShortValue");
            goto LABEL_36;
          case '^':
            objc_msgSend(a4, "pointerValue");
            goto LABEL_31;
          case 'c':
            objc_msgSend(a4, "charValue");
            goto LABEL_36;
          case 'd':
            objc_msgSend(a4, "doubleValue");
            v10 = self;
            v11 = a3;
            if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
              __break(0xC471u);
            goto LABEL_24;
          case 'f':
            objc_msgSend(a4, "floatValue");
            v10 = self;
            v11 = a3;
            if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
              __break(0xC471u);
            goto LABEL_24;
          case 'i':
            objc_msgSend(a4, "intValue");
            goto LABEL_36;
          case 'l':
            objc_msgSend(a4, "longValue");
            goto LABEL_31;
          case 'q':
            objc_msgSend(a4, "longLongValue");
LABEL_31:
            v10 = self;
            v11 = a3;
            goto LABEL_32;
          case 's':
            objc_msgSend(a4, "shortValue");
LABEL_36:
            v10 = self;
            v11 = a3;
            if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
              __break(0xC471u);
            goto LABEL_24;
          default:
            if ( *v9 == 35 )
            {
LABEL_10:
              v10 = self;
              v11 = a3;
LABEL_32:
              if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
                __break(0xC471u);
LABEL_24:
              objc_msgSend(v10, v11);
              return;
            }
LABEL_11:
            v12 = (const char *)objc_msgSend(a4, "objCType");
            if ( v12 )
            {
              v13 = v12;
              if ( !strcmp(v9, v12) )
              {
                v14 = +[NSInvocation invocationWithMethodSignature:](
                        &OBJC_CLASS___NSInvocation,
                        "invocationWithMethodSignature:",
                        v8);
                -[NSInvocation setTarget:](v14, "setTarget:", self);
                -[NSInvocation setSelector:](v14, "setSelector:", a3);
                sizep = 0LL;
                NSGetSizeAndAlignment(v13, &sizep, 0LL);
                v15 = malloc_type_malloc(sizep, 0x7A44F819uLL);
                objc_msgSend(a4, "getValue:", v15);
                -[NSInvocation setArgument:atIndex:](v14, "setArgument:atIndex:", v15, 2LL);
                -[NSInvocation invoke](v14, "invoke");
                free(v15);
                return;
              }
            }
            v19 = objc_opt_class(self);
            v17 = +[NSString stringWithFormat:](
                    &OBJC_CLASS___NSString,
                    "stringWithFormat:",
                    CFSTR("*** -[%@ %@] first argument type does not match type of %@."),
                    v19,
                    NSStringFromSelector(a3),
                    a4);
            v18 = NSInvalidArgumentException;
            break;
        }
        break;
      }
    }
    else
    {
      v16 = objc_opt_class(self);
      v17 = +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("*** -[%@ %@] does not take one argument."),
              v16,
              NSStringFromSelector(a3));
      v18 = NSInvalidArgumentException;
    }
    objc_exception_throw(
      +[NSException exceptionWithName:reason:userInfo:](
        &OBJC_CLASS___NSException,
        "exceptionWithName:reason:userInfo:",
        v18,
        v17,
        0LL));
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[NSObject doesNotRecognizeSelector:](self, "doesNotRecognizeSelector:", a3);
}
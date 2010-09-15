#ifndef NULLVM_METHOD_H
#define NULLVM_METHOD_H

#define METHOD_IS_PUBLIC(m) (m->access & ACC_PUBLIC)
#define METHOD_IS_CONSTRUCTOR(m) (!strcmp("<init>", m->name))
#define METHOD_IS_CLASS_INITIALIZER(m) (!strcmp("<clinit>", m->name))

extern char* nvmGetReturnType(char* desc);
extern char* nvmGetNextArgumentType(char** desc);
extern Method* nvmGetMethod(Env* env, Class* clazz, char* name, char* desc);
extern Method* nvmGetClassMethod(Env* env, Class* clazz, char* name, char* desc);
extern Method* nvmGetClassInitializer(Env* env, Class* clazz);
extern Method* nvmGetInstanceMethod(Env* env, Class* clazz, char* name, char* desc);
extern void* nvmGetNativeMethod(Env* env, char* shortMangledName, char* longMangledName);
extern void nvmCallVoidInstanceMethod(Env* env, Object* obj, Method* method, ...);
extern void nvmCallVoidInstanceMethodA(Env* env, Object* obj, Method* method, jvalue* args);
extern void nvmCallVoidInstanceMethodV(Env* env, Object* obj, Method* method, va_list args);
extern Object* nvmCallObjectInstanceMethod(Env* env, Object* obj, Method* method, ...);
extern Object* nvmCallObjectInstanceMethodA(Env* env, Object* obj, Method* method, jvalue* args);
extern Object* nvmCallObjectInstanceMethodV(Env* env, Object* obj, Method* method, va_list args);
extern jboolean nvmCallBooleanInstanceMethod(Env* env, Object* obj, Method* method, ...);
extern jboolean nvmCallBooleanInstanceMethodA(Env* env, Object* obj, Method* method, jvalue* args);
extern jboolean nvmCallBooleanInstanceMethodV(Env* env, Object* obj, Method* method, va_list args);
extern jbyte nvmCallByteInstanceMethod(Env* env, Object* obj, Method* method, ...);
extern jbyte nvmCallByteInstanceMethodA(Env* env, Object* obj, Method* method, jvalue* args);
extern jbyte nvmCallByteInstanceMethodV(Env* env, Object* obj, Method* method, va_list args);
extern jchar nvmCallCharInstanceMethod(Env* env, Object* obj, Method* method, ...);
extern jchar nvmCallCharInstanceMethodA(Env* env, Object* obj, Method* method, jvalue* args);
extern jchar nvmCallCharInstanceMethodV(Env* env, Object* obj, Method* method, va_list args);
extern jshort nvmCallShortInstanceMethod(Env* env, Object* obj, Method* method, ...);
extern jshort nvmCallShortInstanceMethodA(Env* env, Object* obj, Method* method, jvalue* args);
extern jshort nvmCallShortInstanceMethodV(Env* env, Object* obj, Method* method, va_list args);
extern jint nvmCallIntInstanceMethod(Env* env, Object* obj, Method* method, ...);
extern jint nvmCallIntInstanceMethodA(Env* env, Object* obj, Method* method, jvalue* args);
extern jint nvmCallIntInstanceMethodV(Env* env, Object* obj, Method* method, va_list args);
extern jlong nvmCallLongInstanceMethod(Env* env, Object* obj, Method* method, ...);
extern jlong nvmCallLongInstanceMethodA(Env* env, Object* obj, Method* method, jvalue* args);
extern jlong nvmCallLongInstanceMethodV(Env* env, Object* obj, Method* method, va_list args);
extern jfloat nvmCallFloatInstanceMethod(Env* env, Object* obj, Method* method, ...);
extern jfloat nvmCallFloatInstanceMethodA(Env* env, Object* obj, Method* method, jvalue* args);
extern jfloat nvmCallFloatInstanceMethodV(Env* env, Object* obj, Method* method, va_list args);
extern jdouble nvmCallDoubleInstanceMethod(Env* env, Object* obj, Method* method, ...);
extern jdouble nvmCallDoubleInstanceMethodA(Env* env, Object* obj, Method* method, jvalue* args);
extern jdouble nvmCallDoubleInstanceMethodV(Env* env, Object* obj, Method* method, va_list args);
extern void nvmCallNonvirtualVoidInstanceMethod(Env* env, Object* obj, Method* method, ...);
extern void nvmCallNonvirtualVoidInstanceMethodA(Env* env, Object* obj, Method* method, jvalue* args);
extern void nvmCallNonvirtualVoidInstanceMethodV(Env* env, Object* obj, Method* method, va_list args);
extern Object* nvmCallNonvirtualObjectInstanceMethod(Env* env, Object* obj, Method* method, ...);
extern Object* nvmCallNonvirtualObjectInstanceMethodA(Env* env, Object* obj, Method* method, jvalue* args);
extern Object* nvmCallNonvirtualObjectInstanceMethodV(Env* env, Object* obj, Method* method, va_list args);
extern jboolean nvmCallNonvirtualBooleanInstanceMethod(Env* env, Object* obj, Method* method, ...);
extern jboolean nvmCallNonvirtualBooleanInstanceMethodA(Env* env, Object* obj, Method* method, jvalue* args);
extern jboolean nvmCallNonvirtualBooleanInstanceMethodV(Env* env, Object* obj, Method* method, va_list args);
extern jbyte nvmCallNonvirtualByteInstanceMethod(Env* env, Object* obj, Method* method, ...);
extern jbyte nvmCallNonvirtualByteInstanceMethodA(Env* env, Object* obj, Method* method, jvalue* args);
extern jbyte nvmCallNonvirtualByteInstanceMethodV(Env* env, Object* obj, Method* method, va_list args);
extern jchar nvmCallNonvirtualCharInstanceMethod(Env* env, Object* obj, Method* method, ...);
extern jchar nvmCallNonvirtualCharInstanceMethodA(Env* env, Object* obj, Method* method, jvalue* args);
extern jchar nvmCallNonvirtualCharInstanceMethodV(Env* env, Object* obj, Method* method, va_list args);
extern jshort nvmCallNonvirtualShortInstanceMethod(Env* env, Object* obj, Method* method, ...);
extern jshort nvmCallNonvirtualShortInstanceMethodA(Env* env, Object* obj, Method* method, jvalue* args);
extern jshort nvmCallNonvirtualShortInstanceMethodV(Env* env, Object* obj, Method* method, va_list args);
extern jint nvmCallNonvirtualIntInstanceMethod(Env* env, Object* obj, Method* method, ...);
extern jint nvmCallNonvirtualIntInstanceMethodA(Env* env, Object* obj, Method* method, jvalue* args);
extern jint nvmCallNonvirtualIntInstanceMethodV(Env* env, Object* obj, Method* method, va_list args);
extern jlong nvmCallNonvirtualLongInstanceMethod(Env* env, Object* obj, Method* method, ...);
extern jlong nvmCallNonvirtualLongInstanceMethodA(Env* env, Object* obj, Method* method, jvalue* args);
extern jlong nvmCallNonvirtualLongInstanceMethodV(Env* env, Object* obj, Method* method, va_list args);
extern jfloat nvmCallNonvirtualFloatInstanceMethod(Env* env, Object* obj, Method* method, ...);
extern jfloat nvmCallNonvirtualFloatInstanceMethodA(Env* env, Object* obj, Method* method, jvalue* args);
extern jfloat nvmCallNonvirtualFloatInstanceMethodV(Env* env, Object* obj, Method* method, va_list args);
extern jdouble nvmCallNonvirtualDoubleInstanceMethod(Env* env, Object* obj, Method* method, ...);
extern jdouble nvmCallNonvirtualDoubleInstanceMethodA(Env* env, Object* obj, Method* method, jvalue* args);
extern jdouble nvmCallNonvirtualDoubleInstanceMethodV(Env* env, Object* obj, Method* method, va_list args);
extern void nvmCallVoidClassMethod(Env* env, Class* clazz, Method* method, ...);
extern void nvmCallVoidClassMethodA(Env* env, Class* clazz, Method* method, jvalue* args);
extern void nvmCallVoidClassMethodV(Env* env, Class* clazz, Method* method, va_list args);
extern Object* nvmCallObjectClassMethod(Env* env, Class* clazz, Method* method, ...);
extern Object* nvmCallObjectClassMethodA(Env* env, Class* clazz, Method* method, jvalue* args);
extern Object* nvmCallObjectClassMethodV(Env* env, Class* clazz, Method* method, va_list args);
extern jboolean nvmCallBooleanClassMethod(Env* env, Class* clazz, Method* method, ...);
extern jboolean nvmCallBooleanClassMethodA(Env* env, Class* clazz, Method* method, jvalue* args);
extern jboolean nvmCallBooleanClassMethodV(Env* env, Class* clazz, Method* method, va_list args);
extern jbyte nvmCallByteClassMethod(Env* env, Class* clazz, Method* method, ...);
extern jbyte nvmCallByteClassMethodA(Env* env, Class* clazz, Method* method, jvalue* args);
extern jbyte nvmCallByteClassMethodV(Env* env, Class* clazz, Method* method, va_list args);
extern jchar nvmCallCharClassMethod(Env* env, Class* clazz, Method* method, ...);
extern jchar nvmCallCharClassMethodA(Env* env, Class* clazz, Method* method, jvalue* args);
extern jchar nvmCallCharClassMethodV(Env* env, Class* clazz, Method* method, va_list args);
extern jshort nvmCallShortClassMethod(Env* env, Class* clazz, Method* method, ...);
extern jshort nvmCallShortClassMethodA(Env* env, Class* clazz, Method* method, jvalue* args);
extern jshort nvmCallShortClassMethodV(Env* env, Class* clazz, Method* method, va_list args);
extern jint nvmCallIntClassMethod(Env* env, Class* clazz, Method* method, ...);
extern jint nvmCallIntClassMethodA(Env* env, Class* clazz, Method* method, jvalue* args);
extern jint nvmCallIntClassMethodV(Env* env, Class* clazz, Method* method, va_list args);
extern jlong nvmCallLongClassMethod(Env* env, Class* clazz, Method* method, ...);
extern jlong nvmCallLongClassMethodA(Env* env, Class* clazz, Method* method, jvalue* args);
extern jlong nvmCallLongClassMethodV(Env* env, Class* clazz, Method* method, va_list args);
extern jfloat nvmCallFloatClassMethod(Env* env, Class* clazz, Method* method, ...);
extern jfloat nvmCallFloatClassMethodA(Env* env, Class* clazz, Method* method, jvalue* args);
extern jfloat nvmCallFloatClassMethodV(Env* env, Class* clazz, Method* method, va_list args);
extern jdouble nvmCallDoubleClassMethod(Env* env, Class* clazz, Method* method, ...);
extern jdouble nvmCallDoubleClassMethodA(Env* env, Class* clazz, Method* method, jvalue* args);
extern jdouble nvmCallDoubleClassMethodV(Env* env, Class* clazz, Method* method, va_list args);


#endif


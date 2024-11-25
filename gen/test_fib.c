/* File generated automatically by the QuickJS-ng compiler. */

#include "quickjs-libc.h"

const uint32_t qjsc_test_fib_size = 290;

const uint8_t qjsc_test_fib[290] = {
 0x13, 0x0e, 0x01, 0x28, 0x65, 0x78, 0x61, 0x6d,
 0x70, 0x6c, 0x65, 0x73, 0x2f, 0x74, 0x65, 0x73,
 0x74, 0x5f, 0x66, 0x69, 0x62, 0x2e, 0x6a, 0x73,
 0x01, 0x0c, 0x71, 0x6a, 0x73, 0x3a, 0x6f, 0x73,
 0x01, 0x04, 0x6f, 0x73, 0x01, 0x0a, 0x69, 0x73,
 0x57, 0x69, 0x6e, 0x01, 0x06, 0x66, 0x69, 0x62,
 0x01, 0x10, 0x70, 0x6c, 0x61, 0x74, 0x66, 0x6f,
 0x72, 0x6d, 0x01, 0x0a, 0x77, 0x69, 0x6e, 0x33,
 0x32, 0x01, 0x0c, 0x2e, 0x2f, 0x66, 0x69, 0x62,
 0x2e, 0x01, 0x06, 0x64, 0x6c, 0x6c, 0x01, 0x04,
 0x73, 0x6f, 0x01, 0x0e, 0x63, 0x6f, 0x6e, 0x73,
 0x6f, 0x6c, 0x65, 0x01, 0x06, 0x6c, 0x6f, 0x67,
 0x01, 0x16, 0x48, 0x65, 0x6c, 0x6c, 0x6f, 0x20,
 0x57, 0x6f, 0x72, 0x6c, 0x64, 0x01, 0x10, 0x66,
 0x69, 0x62, 0x28, 0x31, 0x30, 0x29, 0x3d, 0x0d,
 0xc0, 0x03, 0x01, 0xc2, 0x03, 0x00, 0x00, 0x01,
 0x00, 0xfc, 0x01, 0x00, 0x01, 0x0c, 0x20, 0xfa,
 0x01, 0xa2, 0x01, 0x00, 0x00, 0x00, 0x05, 0x03,
 0x00, 0x73, 0x00, 0xc4, 0x03, 0x00, 0x0d, 0xc6,
 0x03, 0x00, 0x0d, 0xc8, 0x03, 0x01, 0x0d, 0x08,
 0xea, 0x02, 0x29, 0x65, 0x00, 0x00, 0x41, 0xe5,
 0x00, 0x00, 0x00, 0x04, 0xe6, 0x00, 0x00, 0x00,
 0xae, 0xe2, 0x06, 0x11, 0xf2, 0xeb, 0x0b, 0x70,
 0x42, 0xe4, 0x00, 0x00, 0x00, 0xe3, 0x0e, 0xec,
 0x24, 0x0e, 0x04, 0xe7, 0x00, 0x00, 0x00, 0x42,
 0x5d, 0x00, 0x00, 0x00, 0x65, 0x01, 0x00, 0xea,
 0x08, 0x04, 0xe8, 0x00, 0x00, 0x00, 0xec, 0x06,
 0x04, 0xe9, 0x00, 0x00, 0x00, 0x24, 0x01, 0x00,
 0x35, 0x8b, 0xec, 0xd4, 0x38, 0xea, 0x00, 0x00,
 0x00, 0x42, 0xeb, 0x00, 0x00, 0x00, 0x04, 0xec,
 0x00, 0x00, 0x00, 0x24, 0x01, 0x00, 0x0e, 0x38,
 0xea, 0x00, 0x00, 0x00, 0x42, 0xeb, 0x00, 0x00,
 0x00, 0x04, 0xed, 0x00, 0x00, 0x00, 0x65, 0x02,
 0x00, 0xbc, 0x0a, 0xef, 0x24, 0x02, 0x00, 0x0e,
 0x06, 0x2e, 0xc0, 0x03, 0x01, 0x01, 0x0a, 0x00,
 0x45, 0x08, 0x6c, 0x36, 0x5b, 0x62, 0x00, 0x2a,
 0x20, 0x00,
};

static JSContext *JS_NewCustomContext(JSRuntime *rt)
{
  JSContext *ctx = JS_NewContext(rt);
  if (!ctx)
    return NULL;
  {
    extern JSModuleDef *js_init_module_os(JSContext *ctx, const char *name);
    js_init_module_os(ctx, "qjs:os");
  }
  return ctx;
}

int main(int argc, char **argv)
{
  int r;
  JSValue ret;
  JSRuntime *rt;
  JSContext *ctx;
  r = 0;
  rt = JS_NewRuntime();
  js_std_set_worker_new_context_func(JS_NewCustomContext);
  js_std_init_handlers(rt);
  JS_SetModuleLoaderFunc(rt, NULL, js_module_loader, NULL);
  ctx = JS_NewCustomContext(rt);
  js_std_add_helpers(ctx, argc, argv);
  js_std_eval_binary(ctx, qjsc_test_fib, qjsc_test_fib_size, 0);
  ret = js_std_loop(ctx);
  if (JS_IsException(ret)) {
    js_std_dump_error1(ctx, ret);
    r = 1;
  }
  JS_FreeValue(ctx, ret);
  JS_FreeContext(ctx);
  js_std_free_handlers(rt);
  JS_FreeRuntime(rt);
  return r;
}

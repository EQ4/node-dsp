#include <node.h>

#include "dsp.h"
#include "filter.h"

extern "C" void init (v8::Handle<v8::Object> target) {
	v8::HandleScope scope;

	NodeDSP::Initialize(target);
	NodeFilter::Initialize(target);
}
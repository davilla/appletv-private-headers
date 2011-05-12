/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

typedef struct _NSZone NSZone;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	int x;
} XXStruct_RiyHGD;

typedef struct Atomic {
	XXStruct_RiyHGD _v;
} Atomic;

typedef struct Object {
	/*function-pointer*/ void **_field1;
	Atomic _field2;
} Object;

typedef struct CGPath *CGPathRef;

typedef struct CGPathElement {
	int _field1;
	CGPoint *_field2;
} CGPathElement;

typedef struct CGPattern *CGPatternRef;

typedef struct CGImage *CGImageRef;

typedef struct CGColor *CGColorRef;

typedef struct CATransform3D {
	float m11;
	float m12;
	float m13;
	float m14;
	float m21;
	float m22;
	float m23;
	float m24;
	float m31;
	float m32;
	float m33;
	float m34;
	float m41;
	float m42;
	float m43;
	float m44;
} CATransform3D;

typedef struct CADoublePoint {
	double x;
	double y;
} CADoublePoint;

typedef struct CADoubleSize {
	double width;
	double height;
} CADoubleSize;

typedef struct CADoubleRect {
	CADoublePoint origin;
	CADoubleSize size;
} CADoubleRect;

typedef struct Timing Timing;

typedef struct Vector Vector;

typedef struct Animation {
	/*function-pointer*/ void **_field1;
	Atomic _field2;
	float _field3;
	Timing *_field4;
	Vector *_field5;
	void *_field6;
	unsigned _field7;
	unsigned _field8;
} Animation;

typedef struct Proxy {
	/*function-pointer*/ void **_field1;
	Atomic _field2;
	unsigned long long _field3;
} Proxy;

typedef struct Context Context;
typedef struct Generic {
	/*function-pointer*/ void **_vptr$GenericContext;
	Context *_c;
} Generic;

typedef struct _opaque_pthread_mutex_t {
	long __sig;
	BOOL __opaque[40];
} opaque_pthread_mutex_t;

typedef struct Mutex {
	opaque_pthread_mutex_t _m;
} Mutex;

typedef struct __CFRunLoopSource *CFRunLoopSourceRef;
typedef struct Shmem Shmem;
typedef struct Commit Commit;
typedef struct CGColorSpace *CGColorSpaceRef;
typedef struct __CFDictionary *CFDictionaryRef;
typedef struct __CFMachPort *CFMachPortRef;
@class CAContext, CALayer;
struct Context {
	unsigned _field1;
	struct Context *_field2;
	struct Mutex _field3;
	CAContext *_field4;
	unsigned _field5;
	unsigned _field6;
	CALayer *_field7;
	struct Context *_field8;
	CGColorSpaceRef _field9;
	CFDictionaryRef _field10;
	unsigned _field11;
	unsigned _field12;
	CFMachPortRef _field13;
	CFRunLoopSourceRef _field14;
	struct Shmem *_field15;
	struct Shmem *_field16;
	float _field17;
	struct Commit *_field18;
	struct Generic _field19;
	unsigned _field20 : 1;
	unsigned _field21 : 1;
	unsigned _field22 : 1;
};

struct CGColorSpace;

struct __CFDictionary;

struct __CFMachPort;

struct __CFRunLoopSource;

struct Shmem;

struct Commit;

typedef struct LayerExt LayerExt;

typedef struct Handle Handle;

template<>
struct Vec2<double> {
	double _field1;
	double _field2;
};

typedef struct Rect {
	double _field1;
	double _field2;
	double _field3;
	double _field4;
} Rect;

template<>
struct TypedArray<CA::Render::Layer>;

template<>
struct TypedArray<CA::Render::Animation>;

typedef struct Layer {
	/*function-pointer*/ void **_field1;
	Atomic _field2;
	unsigned _field3;
	unsigned short _field4;
	unsigned short _field5;
	float _field6;
	LayerExt *_field7;
	Handle *_field8;
	Object *_field9;
	Vec2<double> _field10;
	Rect _field11;
	TypedArray<CA::Render::Layer> *_field12;
	TypedArray<CA::Render::Animation> *_field13;
} Layer;

typedef struct Shared Shared;

template<>
struct HashTable<CALayer*,uintptr_t*>;

typedef struct SpinLock {
	XXStruct_RiyHGD _l;
} SpinLock;

typedef struct Level Level;

typedef struct Command Command;

typedef struct Deleted Deleted;

template<>
struct List<const void*>;

template<>
struct HashTable<CALayer*,CALayer*>;

typedef struct __CFRunLoop *CFRunLoopRef;

typedef struct __CFRunLoopObserver *CFRunLoopObserverRef;

typedef struct Transaction {
	Shared *_field1;
	int _field2;
	HashTable<CALayer*,uintptr_t*> *_field3;
	SpinLock *_field4;
	unsigned _field5;
	Level *_field6;
	Command *_field7;
	Deleted *_field8;
	List<const void*> *_field9;
	Context *_field10;
	HashTable<CALayer*,CALayer*> *_field11;
	CFRunLoopRef _field12;
	CFRunLoopObserverRef _field13;
	unsigned _field14 : 1;
	unsigned _field15 : 1;
	unsigned _field16 : 1;
	unsigned _field17 : 1;
	unsigned _field18 : 1;
} Transaction;

typedef struct CGContext *CGContextRef;

typedef struct _CALayerState *CALayerStateRef;

typedef struct _CALayerAnimation *CALayerAnimationRef;

@class CALayerArray;
typedef struct _CALayerIvars {
	int refcount;
	unsigned flags;
	unsigned parent;
	CALayerArray *sublayers;
	CALayer *mask;
	CALayerStateRef state;
	CALayerStateRef previous_state;
	CALayerAnimationRef animations;
	unsigned slots[3];
} CALayerIvars;

typedef struct CGAffineTransform {
	float a;
	float b;
	float c;
	float d;
	float tx;
	float ty;
} CGAffineTransform;

typedef struct _CALayerArrayIvars {
	CALayer **layers;
	unsigned count;
	unsigned capacity;
	unsigned long mutations;
	BOOL retained;
} CALayerArrayIvars;

typedef struct {
	unsigned long _field1;
	id *_field2;
	unsigned long *_field3;
	unsigned long _field4[5];
} XXStruct_kFm5bA;

typedef struct _NSRange {
	unsigned _field1;
	unsigned _field2;
} NSRange;

typedef struct CAMediaTimingFunctionPrivate {
	float _field1[2];
	float _field2[2];
} CAMediaTimingFunctionPrivate;

typedef struct __CTTypesetter *CTTypesetterRef;

typedef struct CATextLayerPrivate {
	Mutex _field1;
	CTTypesetterRef _field2;
} CATextLayerPrivate;

typedef struct __CTLine *CTLineRef;

typedef struct __CFRunLoopTimer *CFRunLoopTimerRef;

typedef struct _EAGLNativeWindowObject {
	int version;
	/*function-pointer*/ void *attach;
	/*function-pointer*/ void *detach;
	/*function-pointer*/ void *begin;
	/*function-pointer*/ void *swap;
	/*function-pointer*/ void *collect;
	/*function-pointer*/ void *properties;
} EAGLNativeWindowObject;

typedef struct x_list_struct x_list_struct;

typedef struct _CAImageQueue *CAImageQueueRef;

typedef struct CAEAGLBuffer *CAEAGLBufferRef;

@class CAEAGLLayer;
typedef struct _CAEAGLNativeWindow {
	EAGLNativeWindowObject _field1;
	void *_field2;
	/*function-pointer*/ void *_field3;
	/*function-pointer*/ void *_field4;
	/*function-pointer*/ void *_field5;
	x_list_struct *_field6;
	Atomic _field7;
	SpinLock _field8;
	CAImageQueueRef _field9;
	CAEAGLLayer *_field10;
	x_list_struct *_field11;
	unsigned _field12;
	CAEAGLBufferRef _field13;
	CAEAGLBufferRef _field14;
	unsigned _field15;
	unsigned _field16;
	unsigned _field17;
	CAEAGLBufferRef _field18;
	unsigned _field19 : 1;
	unsigned _field20 : 1;
	unsigned _field21 : 1;
	unsigned _field22 : 1;
} CAEAGLNativeWindow;

typedef struct Update Update;

@class CAAssignedPointer, EAGLContext;
typedef struct CARendererPriv {
	CAContext *_field1;
	CAAssignedPointer *_field2;
	EAGLContext *_field3;
	int _field4;
	Context *_field5;
	CGRect _field6;
	Update *_field7;
	unsigned _field8;
	unsigned _field9[2];
	unsigned _field10[2];
	unsigned _field11;
	unsigned _field12 : 8;
	unsigned _field13;
	BOOL _field14[0];
} CARendererPriv;

typedef struct CVSMPTETime {
	short _field1;
	short _field2;
	unsigned _field3;
	unsigned _field4;
	unsigned _field5;
	short _field6;
	short _field7;
	short _field8;
	short _field9;
} CVSMPTETime;

typedef struct {
	unsigned _field1;
	int _field2;
	long long _field3;
	unsigned long long _field4;
	double _field5;
	long long _field6;
	CVSMPTETime _field7;
	unsigned long long _field8;
	unsigned long long _field9;
} XXStruct_soD7RD;

typedef struct String String;

typedef struct Behavior {
	/*function-pointer*/ void **_field1;
	Atomic _field2;
	unsigned _field3;
	String *_field4;
	unsigned _field5;
	unsigned _field6;
	unsigned _field7 : 8;
	unsigned _field8 : 8;
	struct Behavior *_field9;
} Behavior;

typedef struct Bounds {
	int _field1;
	int _field2;
	int _field3;
	int _field4;
} Bounds;

typedef struct ModeSet {
	unsigned _field1;
	unsigned _field2[1];
} ModeSet;

typedef struct __CFString *CFStringRef;
typedef struct Display {
	/*function-pointer*/ void **_field1;
	id _field2;
	CFStringRef _field3;
	CFStringRef _field4;
	unsigned _field5;
	ModeSet _field6;
	int _field7;
	int _field8;
	int _field9;
	Bounds _field10;
	unsigned _field11;
	unsigned _field12;
	bool _field13;
	bool _field14;
	bool _field15;
	bool _field16;
	bool _field17;
	unsigned _field18;
	bool _field19;
} Display;

typedef struct _opaque_pthread_cond_t {
	long _field1;
	BOOL _field2[24];
} opaque_pthread_cond_t;

typedef struct Condition {
	opaque_pthread_cond_t _field1;
} Condition;

typedef struct _opaque_pthread_t opaque_pthread_t;

template<>
struct List<const __CFString*>;

typedef struct DisplayLink {
	/*function-pointer*/ void **_field1;
	Display *_field2;
	void *_field3;
	SEL _field4;
	void *_field5;
	int _field6;
	Mutex _field7;
	Condition _field8;
	opaque_pthread_t *_field9;
	id _field10;
	CFRunLoopRef _field11;
	List<const __CFString*> *_field12;
	unsigned long long _field13;
	unsigned long long _field14;
	unsigned _field15 : 1;
} DisplayLink;

struct __CFString;

typedef struct ContextItem ContextItem;

typedef struct PendingOperation PendingOperation;

typedef struct Shape Shape;

typedef struct Server {
	/*function-pointer*/ void **_field1;
	SpinLock _field2;
	Mutex _field3;
	Display *_field4;
	CFStringRef _field5;
	ContextItem *_field6;
	unsigned _field7;
	unsigned _field8;
	SpinLock _field9;
	PendingOperation *_field10;
	Context *_field11;
	Context *_field12;
	unsigned _field13;
	Shape *_field14;
	unsigned _field15;
	Context *_field16;
	double _field17;
	unsigned _field18 : 1;
	unsigned _field19 : 1;
	unsigned _field20 : 1;
} Server;

typedef struct __CFArray *CFArrayRef;

typedef struct CAWindowServerImpl {
	CFArrayRef _field1;
	unsigned _field2;
} CAWindowServerImpl;

typedef struct KeyValueArray {
	/*function-pointer*/ void **_field1;
	Atomic _field2;
	unsigned _field3;
	Object *_field4[1];
} KeyValueArray;

typedef struct ValueInterpolator {
	double _field1;
	double _field2;
	double _field3;
	double _field4;
	double _field5;
	double _field6;
	double _field7;
	double _field8;
	double _field9;
	bool _field10;
} ValueInterpolator;



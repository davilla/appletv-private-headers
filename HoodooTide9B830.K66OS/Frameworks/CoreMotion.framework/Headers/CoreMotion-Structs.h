/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

typedef struct _NSZone NSZone;

typedef struct {
	float x;
	float y;
	float z;
} XXStruct_ZUkpeA;

typedef struct {
	double x;
	double y;
	double z;
} XXStruct_taVrlB;

typedef struct {
	double w;
	double x;
	double y;
	double z;
} XXStruct_N5B6hD;

typedef struct {
	XXStruct_N5B6hD quaternion;
	XXStruct_ZUkpeA userAcceleration;
	XXStruct_ZUkpeA rotationRate;
	XXStruct_ZUkpeA magneticField;
	int magneticFieldCalibrationLevel;
} XXStruct_96S$IC;

typedef struct {
	XXStruct_taVrlB _field1;
	int _field2;
} XXStruct_1dFDiB;

typedef struct {
	double _field1;
	double _field2;
	double _field3;
	double _field4;
	double _field5;
	double _field6;
	double _field7;
	double _field8;
	double _field9;
} XXStruct_VSauOA;

typedef struct Dispatcher Dispatcher;

typedef struct Sample {
	double timestamp;
	XXStruct_ZUkpeA acceleration;
} Sample;

typedef struct Sample {
	double timestamp;
	XXStruct_ZUkpeA rotationRate;
	bool fsync;
} Sample;

typedef struct Sample {
	double timestamp;
	XXStruct_96S$IC deviceMotion;
	bool fsync;
} Sample;

typedef struct {
	double x;
	double y;
	double z;
	double magnitude;
	double horizontal;
	double declination;
	double inclination;
	double timestamp;
} XXStruct_01mbIB;

typedef struct CLMotionActivity {
	int type;
	int confidence;
} CLMotionActivity;

typedef struct _Alloc_hider {
	char *_field1;
} Alloc_hider;

template<>
struct basic_string<char, std::char_traits<char>, std::allocator<char> > {
	Alloc_hider _field1;
};

typedef struct dispatch_queue_s dispatch_queue_s;

typedef struct CLConnection *CLConnectionRef;

typedef struct __CFDictionary *CFDictionaryRef;

typedef struct CLNameValuePair {
	/*function-pointer*/ void **_field1;
	CFDictionaryRef _field2;
} CLNameValuePair;

template<>
struct less<std::basic_string<char> >;

typedef struct _Rb_tree_node_base {
	int _field1;
	struct Rb_tree_node_base *_field2;
	struct Rb_tree_node_base *_field3;
	struct Rb_tree_node_base *_field4;
} Rb_tree_node_base;

template<>
struct _Rb_tree_impl<std::less<std::basic_string<char> >, false> {
	less<std::basic_string<char> > _field1;
	Rb_tree_node_base _field2;
	unsigned _field3;
};

template<>
struct _Rb_tree<std::basic_string<char>, std::pair<const std::basic_string<char>, void (^)(CLConnectionMessage *)>, std::_Select1st<std::pair<const std::basic_string<char>, void (^)(CLConnectionMessage *)> >, std::less<std::basic_string<char> >, std::allocator<std::pair<const std::basic_string<char>, void (^)(CLConnectionMessage *)> > > {
	_Rb_tree_impl<std::less<std::basic_string<char> >, false> _field1;
};

template<>
struct map<std::basic_string<char>, void (^)(CLConnectionMessage *), std::less<std::basic_string<char> >, std::allocator<std::pair<const std::basic_string<char>, void (^)(CLConnectionMessage *)> > > {
	_Rb_tree<std::basic_string<char>, std::pair<const std::basic_string<char>, void (^)(CLConnectionMessage *)>, std::_Select1st<std::pair<const std::basic_string<char>, void (^)(CLConnectionMessage *)> >, std::less<std::basic_string<char> >, std::allocator<std::pair<const std::basic_string<char>, void (^)(CLConnectionMessage *)> > > _field1;
};

typedef struct CLConnectionClient {
	basic_string<char, std::char_traits<char>, std::allocator<char> > _field1;
	dispatch_queue_s *_field2;
	dispatch_queue_s *_field3;
	dispatch_queue_s *_field4;
	CLConnectionRef _field5;
	CLNameValuePair _field6;
	CLNameValuePair _field7;
	basic_string<char, std::char_traits<char>, std::allocator<char> > _field8;
	id _field9;
	/*function-pointer*/ void _field10;
	id _field11;
	/*function-pointer*/ void _field12;
	map<std::basic_string<char>, void (^)(CLConnectionMessage *), std::less<std::basic_string<char> >, std::allocator<std::pair<const std::basic_string<char>, void (^)(CLConnectionMessage *)> > > _field13;
	id _field14;
	/*function-pointer*/ void _field15;
} CLConnectionClient;

typedef struct dispatch_source_s dispatch_source_s;



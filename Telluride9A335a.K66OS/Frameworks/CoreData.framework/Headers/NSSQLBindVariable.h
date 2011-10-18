/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSAttributeDescription;

__attribute__((visibility("hidden")))
@interface NSSQLBindVariable : NSObject {
@private
	int _cd_rc;	// 4 = 0x4
	id _value;	// 8 = 0x8
	unsigned _sqlType;	// 12 = 0xc
	unsigned _index;	// 16 = 0x10
	long long _int64;	// 20 = 0x14
	NSAttributeDescription *_attributeDescription;	// 28 = 0x1c
}
@property(readonly, retain) NSAttributeDescription *attributeDescription;	// G=0x33168c5d; converted property
@property(assign) unsigned index;	// G=0x33168c4d; S=0x330d508d; converted property
@property(assign) long long int64;	// G=0x33168ced; S=0x33168c21; converted property
@property(readonly, assign) unsigned sqlType;	// G=0x330d6d41; converted property
@property(assign) unsigned unsignedInt;	// G=0x33168cb5; S=0x33168c35; converted property
@property(retain) id value;	// G=0x330d6d71; S=0x33168c6d; converted property
- (id)initWithInt64:(long long)int64 sqlType:(unsigned)type;	// 0x33168df1
- (id)initWithUnsignedInt:(unsigned)unsignedInt sqlType:(unsigned)type;	// 0x33168db1
- (id)initWithValue:(id)value sqlType:(unsigned)type attributeDescription:(id)description;	// 0x330d4151
- (BOOL)_isDeallocating;	// 0x33168d2d
- (BOOL)_tryRetain;	// 0x33168d55
// converted property getter: - (id)attributeDescription;	// 0x33168c5d
- (void)dealloc;	// 0x330d75e1
- (BOOL)hasObjectValue;	// 0x330d6d51
// converted property getter: - (unsigned)index;	// 0x33168c4d
// converted property getter: - (long long)int64;	// 0x33168ced
- (oneway void)release;	// 0x330d423d
- (id)retain;	// 0x330d4205
- (unsigned)retainCount;	// 0x33168c0d
// converted property setter: - (void)setIndex:(unsigned)index;	// 0x330d508d
// converted property setter: - (void)setInt64:(long long)a64;	// 0x33168c21
// converted property setter: - (void)setUnsignedInt:(unsigned)int;	// 0x33168c35
// converted property setter: - (void)setValue:(id)value;	// 0x33168c6d
// converted property getter: - (unsigned)sqlType;	// 0x330d6d41
// converted property getter: - (unsigned)unsignedInt;	// 0x33168cb5
// converted property getter: - (id)value;	// 0x330d6d71
@end


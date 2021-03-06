/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EDPivotAreaReference : NSObject {
@private
	bool mByPosition;	// 4 = 0x4
	bool mRelative;	// 5 = 0x5
	bool mSelected;	// 6 = 0x6
	unsigned mFieldId;	// 8 = 0x8
	unsigned mCount;	// 12 = 0xc
}
@property(assign) bool byPosition;	// G=0x3122fadd; S=0x3122faf1; converted property
@property(assign) unsigned count;	// G=0x3122fb69; S=0x3122fb79; converted property
@property(assign) unsigned fieldId;	// G=0x3122fb49; S=0x3122fb59; converted property
@property(assign) bool relative;	// G=0x3122fb01; S=0x3122fb15; converted property
@property(assign) bool selected;	// G=0x3122fb25; S=0x3122fb39; converted property
+ (id)pivotAreaReference;	// 0x3122fa95
- (id)init;	// 0x3122fa1d
// converted property getter: - (bool)byPosition;	// 0x3122fadd
// converted property getter: - (unsigned)count;	// 0x3122fb69
// converted property getter: - (unsigned)fieldId;	// 0x3122fb49
// converted property getter: - (bool)relative;	// 0x3122fb01
// converted property getter: - (bool)selected;	// 0x3122fb25
// converted property setter: - (void)setByPosition:(bool)position;	// 0x3122faf1
// converted property setter: - (void)setCount:(unsigned)count;	// 0x3122fb79
// converted property setter: - (void)setFieldId:(unsigned)anId;	// 0x3122fb59
// converted property setter: - (void)setRelative:(bool)relative;	// 0x3122fb15
// converted property setter: - (void)setSelected:(bool)selected;	// 0x3122fb39
@end


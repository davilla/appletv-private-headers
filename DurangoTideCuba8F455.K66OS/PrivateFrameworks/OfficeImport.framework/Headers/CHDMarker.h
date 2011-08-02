/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDMarker : NSObject {
@private
	unsigned mSize;	// 4 = 0x4
	int mStyle;	// 8 = 0x8
	OADGraphicProperties *mGraphicProperties;	// 12 = 0xc
}
@property(retain) id graphicProperties;	// G=0x32c469bd; S=0x32c46631; converted property
@property(assign) unsigned size;	// G=0x32c46a09; S=0x32c4666d; converted property
@property(assign) int style;	// G=0x32c46a19; S=0x32c4667d; converted property
- (id)init;	// 0x32c46381
- (void)dealloc;	// 0x32c48fe5
// converted property getter: - (id)graphicProperties;	// 0x32c469bd
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x32c46631
// converted property setter: - (void)setSize:(unsigned)size;	// 0x32c4666d
// converted property setter: - (void)setStyle:(int)style;	// 0x32c4667d
// converted property getter: - (unsigned)size;	// 0x32c46a09
// converted property getter: - (int)style;	// 0x32c46a19
@end

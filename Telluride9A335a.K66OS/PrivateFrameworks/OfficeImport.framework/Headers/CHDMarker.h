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
@property(retain) id graphicProperties;	// G=0x35294b69; S=0x35293409; converted property
@property(assign) unsigned size;	// G=0x35294ba9; S=0x35294bb9; converted property
@property(assign) int style;	// G=0x35294bc9; S=0x35294bfd; converted property
- (id)init;	// 0x352931d5
- (void)dealloc;	// 0x352a0d75
// converted property getter: - (id)graphicProperties;	// 0x35294b69
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x35293409
// converted property setter: - (void)setSize:(unsigned)size;	// 0x35294bb9
// converted property setter: - (void)setStyle:(int)style;	// 0x35294bfd
// converted property getter: - (unsigned)size;	// 0x35294ba9
// converted property getter: - (int)style;	// 0x35294bc9
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADShapeGeometry : NSObject {
@private
	BOOL mIsEscher;	// 4 = 0x4
	NSMutableDictionary *mAdjustValues;	// 8 = 0x8
}
@property(assign) BOOL isEscher;	// G=0x32ba45ed; S=0x32b7ca7d; converted property
- (id)init;	// 0x32b7ca21
- (long)adjustValueAtIndex:(unsigned)index;	// 0x32c1a8f9
- (id)adjustValues;	// 0x32b1800d
- (void)dealloc;	// 0x32b138e9
- (BOOL)hasAdjustValueAtIndex:(unsigned)index;	// 0x32cd8bfd
// converted property getter: - (BOOL)isEscher;	// 0x32ba45ed
- (void)setAdjustValue:(long)value atIndex:(unsigned)index;	// 0x32b7dad5
// converted property setter: - (void)setIsEscher:(BOOL)escher;	// 0x32b7ca7d
@end


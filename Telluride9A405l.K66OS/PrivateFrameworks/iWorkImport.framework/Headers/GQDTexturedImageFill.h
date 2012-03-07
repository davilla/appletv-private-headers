/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "GQDNameMappable.h"
#import "iWorkImport-Structs.h"

@class GQDFilteredImage, GQDColor;

__attribute__((visibility("hidden")))
@interface GQDTexturedImageFill : NSObject <GQDNameMappable> {
@private
	int mTechnique;	// 4 = 0x4
	GQDColor *mColor;	// 8 = 0x8
	GQDFilteredImage *mFilteredImage;	// 12 = 0xc
}
@property(retain) id color;	// G=0x34248f79; S=0x34248fd5; converted property
+ (const StateSpec *)stateForReading;	// 0x34248f5d
// converted property getter: - (id)color;	// 0x34248f79
- (void)dealloc;	// 0x3424901d
- (id)imageBinary;	// 0x34248f89
- (void)invalidateFilteredImage;	// 0x34248fa9
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x34249401
// converted property setter: - (void)setColor:(id)color;	// 0x34248fd5
- (int)technique;	// 0x34248f69
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface MRAsset : NSObject {
	NSString *mPath;	// 4 = 0x4
}
@property(copy) NSString *path;	// G=0x332d4699; S=0x332d46b1; @synthesize=mPath
+ (id)mrAssetWithPath:(id)path;	// 0x332d45d5
- (CGImageRef)CGImageForSize:(CGSize)size;	// 0x332d4695
- (void)dealloc;	// 0x332d4631
// declared property getter: - (id)path;	// 0x332d4699
// declared property setter: - (void)setPath:(id)path;	// 0x332d46b1
- (id)workingPath;	// 0x332d4675
- (id)workingPathForSize:(CGSize)size;	// 0x332d4685
@end


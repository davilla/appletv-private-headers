/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIUpdateItem.h"

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface UIRowMoveUpdateItem : UIUpdateItem {
@private
	NSIndexPath *_newIndexPath;	// 24 = 0x18
}
@property(readonly, retain) NSIndexPath *newIndexPath;	// G=0x33155619; converted property
- (id)initWithOldIndexPath:(id)oldIndexPath newIndexPath:(id)path;	// 0x331555bd
// converted property getter: - (id)newIndexPath;	// 0x33155619
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _NSIndexPathUniqueTreeNode : NSObject {
@private
	unsigned _index;	// 4 = 0x4
	id _indexPath;	// 8 = 0x8
	id _childNodes;	// 12 = 0xc
	id _nextSibling;	// 16 = 0x10
}
- (id)init;	// 0x32755d41
- (void)_clear;	// 0x32755d81
- (void)dealloc;	// 0x32759775
- (void)finalize;	// 0x32797269
- (id)nextSiblingWithIndex:(unsigned)index;	// 0x32797189
@end


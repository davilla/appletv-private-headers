/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


@interface NSDocInfo : NSObject <NSCopying> {
	int time;	// 4 = 0x4
	unsigned short mode;	// 8 = 0x8
	struct {
		unsigned isDir : 1;
		unsigned isSingleFile : 1;
		unsigned isSoftLink : 1;
		unsigned _pad : 13;
	} flags;	// 10 = 0xa
}
- (id)initFromInfo:(stat *)info;	// 0x310df03d
- (id)initWithFileAttributes:(id)fileAttributes;	// 0x310deee5
- (id)copy;	// 0x310dd229
- (id)copyWithZone:(NSZone *)zone;	// 0x310df9b1
@end


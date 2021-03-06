/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSDirectoryEnumerator.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator {
@private
	CFURLEnumeratorRef _enumerator;	// 4 = 0x4
	id _errorHandler;	// 8 = 0x8
	BOOL shouldContinue;	// 12 = 0xc
}
@property(copy) id errorHandler;	// G=0x31d56eed; S=0x31d3b1e9; @synthesize=_errorHandler
- (id)initWithURL:(id)url includingPropertiesForKeys:(id)keys options:(unsigned)options errorHandler:(id)handler;	// 0x31d3b109
- (void)dealloc;	// 0x31d3b289
- (id)directoryAttributes;	// 0x31d56ea5
// declared property getter: - (id)errorHandler;	// 0x31d56eed
- (id)fileAttributes;	// 0x31d56ea1
- (void)finalize;	// 0x31d56ea9
- (unsigned)level;	// 0x31d56e8d
- (id)nextObject;	// 0x31d3b20d
// declared property setter: - (void)setErrorHandler:(id)handler;	// 0x31d3b1e9
- (void)skipDescendants;	// 0x31d56e79
- (void)skipDescendents;	// 0x31d56e69
@end


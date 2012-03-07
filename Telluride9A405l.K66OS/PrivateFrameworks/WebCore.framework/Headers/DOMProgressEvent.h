/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMEvent.h"


__attribute__((visibility("hidden")))
@interface DOMProgressEvent : DOMEvent {
}
@property(readonly, assign) BOOL lengthComputable;	// G=0x307327b5; 
@property(readonly, assign) unsigned long long loaded;	// G=0x307327e5; 
@property(readonly, assign) unsigned long long total;	// G=0x30732815; 
- (void)initProgressEvent:(id)event canBubbleArg:(BOOL)arg cancelableArg:(BOOL)arg3 lengthComputableArg:(BOOL)arg4 loadedArg:(unsigned long long)arg5 totalArg:(unsigned long long)arg6;	// 0x30732845
// declared property getter: - (BOOL)lengthComputable;	// 0x307327b5
// declared property getter: - (unsigned long long)loaded;	// 0x307327e5
// declared property getter: - (unsigned long long)total;	// 0x30732815
@end

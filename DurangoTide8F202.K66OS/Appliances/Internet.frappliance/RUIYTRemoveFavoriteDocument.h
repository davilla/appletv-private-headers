/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTDocument.h"

@class NSString;

@interface RUIYTRemoveFavoriteDocument : RUIYTDocument {
	NSString *_accessToken;	// 52 = 0x34
	NSString *_videoID;	// 56 = 0x38
}
@property(retain) NSString *accessToken;	// G=0x203a1; S=0x203d1; @synthesize=_accessToken
@property(retain) NSString *videoID;	// G=0x203b9; S=0x203fd; @synthesize=_videoID
- (id)URLRequest;	// 0x201f5
// declared property getter: - (id)accessToken;	// 0x203a1
- (void)dealloc;	// 0x20345
- (void)documentLoaded;	// 0x201f1
// declared property setter: - (void)setAccessToken:(id)token;	// 0x203d1
// declared property setter: - (void)setVideoID:(id)anId;	// 0x203fd
// declared property getter: - (id)videoID;	// 0x203b9
@end


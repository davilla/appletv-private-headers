/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSObject.h"


@protocol AVPlaylistFeeder <NSObject>
- (void)assumeOwnershipOfItems:(id)items;
- (unsigned)itemCount;
- (id)itemForIndex:(unsigned)index;
- (BOOL)shouldReloadForChangeFromNetworkType:(int)networkType toNetworkType:(int)networkType2;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "MusicLibrary-Structs.h"

@class NSString, NSNumber, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MLMovieArtist : NSObject <NSCopying> {
@private
	NSMutableDictionary *_dictionary;	// 4 = 0x4
}
@property(copy, nonatomic) NSNumber *ITunesStoreIdentifier;	// G=0x333f664d; S=0x333f6615; 
@property(copy, nonatomic) NSString *artistName;	// G=0x333f6691; S=0x333f6631; 
- (id)init;	// 0x333f6719
- (id)initWithMovieArtistDictionary:(id)movieArtistDictionary;	// 0x333f6abd
// declared property getter: - (id)ITunesStoreIdentifier;	// 0x333f664d
- (void)_setValue:(id)value forKey:(id)key;	// 0x333f65ad
- (void)_setValueCopy:(id)copy forKey:(id)key;	// 0x333f656d
// declared property getter: - (id)artistName;	// 0x333f6691
- (id)copyMovieArtistDictionary;	// 0x333f65f5
- (id)copyWithZone:(NSZone *)zone;	// 0x333f66d5
- (void)dealloc;	// 0x333f6a75
// declared property setter: - (void)setArtistName:(id)name;	// 0x333f6631
// declared property setter: - (void)setITunesStoreIdentifier:(id)identifier;	// 0x333f6615
@end


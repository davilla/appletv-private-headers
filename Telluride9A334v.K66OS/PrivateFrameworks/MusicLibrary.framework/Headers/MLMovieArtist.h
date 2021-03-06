/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "MusicLibrary-Structs.h"

@class NSMutableDictionary, NSString, NSNumber;

__attribute__((visibility("hidden")))
@interface MLMovieArtist : NSObject <NSCopying> {
@private
	NSMutableDictionary *_dictionary;	// 4 = 0x4
}
@property(copy, nonatomic) NSNumber *ITunesStoreIdentifier;	// G=0x3380df3d; S=0x3380dfa9; 
@property(copy, nonatomic) NSString *artistName;	// G=0x3380deed; S=0x3380df8d; 
- (id)init;	// 0x3380ddbd
- (id)initWithMovieArtistDictionary:(id)movieArtistDictionary;	// 0x3380ddd1
// declared property getter: - (id)ITunesStoreIdentifier;	// 0x3380df3d
- (void)_setValue:(id)value forKey:(id)key;	// 0x3380dfe5
- (void)_setValueCopy:(id)copy forKey:(id)key;	// 0x3380e021
// declared property getter: - (id)artistName;	// 0x3380deed
- (id)copyMovieArtistDictionary;	// 0x3380dfc5
- (id)copyWithZone:(NSZone *)zone;	// 0x3380dea1
- (void)dealloc;	// 0x3380de55
// declared property setter: - (void)setArtistName:(id)name;	// 0x3380df8d
// declared property setter: - (void)setITunesStoreIdentifier:(id)identifier;	// 0x3380dfa9
@end


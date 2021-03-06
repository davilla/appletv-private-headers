/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class SALocalSearchReviewList, NSString, NSArray, NSURL, NSDate, NSNumber;

@interface SAMovieMovie : SADomainObject {
}
@property(copy, nonatomic) NSArray *actors;	// G=0x379802d9; S=0x379802f5; 
@property(copy, nonatomic) NSArray *directors;	// G=0x37980345; S=0x37980361; 
@property(copy, nonatomic) NSArray *genres;	// G=0x379803b1; S=0x379803cd; 
@property(copy, nonatomic) NSURL *hiResTrailerUri;	// G=0x3798041d; S=0x37980499; 
@property(copy, nonatomic) NSURL *iTunesUri;	// G=0x379804f9; S=0x37980575; 
@property(assign, nonatomic) BOOL is3d;	// G=0x379805d5; S=0x3798064d; 
@property(copy, nonatomic) NSNumber *isAvailableOnItunesForPurchase;	// G=0x37980691; S=0x379806ad; 
@property(copy, nonatomic) NSNumber *isAvailableOnItunesForRent;	// G=0x379806fd; S=0x37980719; 
@property(copy, nonatomic) NSURL *lowResTrailerUri;	// G=0x37980769; S=0x379807e5; 
@property(copy, nonatomic) NSString *name;	// G=0x37980845; S=0x37980861; 
@property(copy, nonatomic) NSArray *posterImages;	// G=0x379808b1; S=0x3798092d; 
@property(copy, nonatomic) NSURL *posterUri;	// G=0x37980995; S=0x37980a11; 
@property(copy, nonatomic) NSNumber *qualityRating;	// G=0x37980a71; S=0x37980a8d; 
@property(copy, nonatomic) NSString *rating;	// G=0x37980add; S=0x37980af9; 
@property(retain, nonatomic) SALocalSearchReviewList *reviews;	// G=0x37980b49; S=0x37980b9d; 
@property(copy, nonatomic) NSURL *rottenTomatoesUri;	// G=0x37980bd9; S=0x37980c55; 
@property(assign, nonatomic) int runtimeInMinutes;	// G=0x37980cb5; S=0x37980d25; 
@property(copy, nonatomic) NSArray *studios;	// G=0x37980d69; S=0x37980d85; 
@property(copy, nonatomic) NSString *synopsis;	// G=0x37980dd5; S=0x37980df1; 
@property(copy, nonatomic) NSString *theaterShowtimeSearchRegionDescription;	// G=0x37980e41; S=0x37980e5d; 
@property(copy, nonatomic) NSArray *theaterShowtimes;	// G=0x37980ead; S=0x37980f29; 
@property(copy, nonatomic) NSDate *theatricalReleaseDate;	// G=0x37980f91; S=0x37980fad; 
@property(copy, nonatomic) NSURL *trailerUri;	// G=0x37980ffd; S=0x37981079; 
+ (id)movie;	// 0x37980249
+ (id)movieWithDictionary:(id)dictionary context:(id)context;	// 0x3798028d
// declared property getter: - (id)actors;	// 0x379802d9
// declared property getter: - (id)directors;	// 0x37980345
- (id)encodedClassName;	// 0x3798023d
// declared property getter: - (id)genres;	// 0x379803b1
- (id)groupIdentifier;	// 0x3798022d
// declared property getter: - (id)hiResTrailerUri;	// 0x3798041d
// declared property getter: - (id)iTunesUri;	// 0x379804f9
// declared property getter: - (BOOL)is3d;	// 0x379805d5
// declared property getter: - (id)isAvailableOnItunesForPurchase;	// 0x37980691
// declared property getter: - (id)isAvailableOnItunesForRent;	// 0x379806fd
// declared property getter: - (id)lowResTrailerUri;	// 0x37980769
// declared property getter: - (id)name;	// 0x37980845
// declared property getter: - (id)posterImages;	// 0x379808b1
// declared property getter: - (id)posterUri;	// 0x37980995
// declared property getter: - (id)qualityRating;	// 0x37980a71
// declared property getter: - (id)rating;	// 0x37980add
// declared property getter: - (id)reviews;	// 0x37980b49
// declared property getter: - (id)rottenTomatoesUri;	// 0x37980bd9
// declared property getter: - (int)runtimeInMinutes;	// 0x37980cb5
// declared property setter: - (void)setActors:(id)actors;	// 0x379802f5
// declared property setter: - (void)setDirectors:(id)directors;	// 0x37980361
// declared property setter: - (void)setGenres:(id)genres;	// 0x379803cd
// declared property setter: - (void)setHiResTrailerUri:(id)uri;	// 0x37980499
// declared property setter: - (void)setITunesUri:(id)uri;	// 0x37980575
// declared property setter: - (void)setIs3d:(BOOL)d;	// 0x3798064d
// declared property setter: - (void)setIsAvailableOnItunesForPurchase:(id)purchase;	// 0x379806ad
// declared property setter: - (void)setIsAvailableOnItunesForRent:(id)rent;	// 0x37980719
// declared property setter: - (void)setLowResTrailerUri:(id)uri;	// 0x379807e5
// declared property setter: - (void)setName:(id)name;	// 0x37980861
// declared property setter: - (void)setPosterImages:(id)images;	// 0x3798092d
// declared property setter: - (void)setPosterUri:(id)uri;	// 0x37980a11
// declared property setter: - (void)setQualityRating:(id)rating;	// 0x37980a8d
// declared property setter: - (void)setRating:(id)rating;	// 0x37980af9
// declared property setter: - (void)setReviews:(id)reviews;	// 0x37980b9d
// declared property setter: - (void)setRottenTomatoesUri:(id)uri;	// 0x37980c55
// declared property setter: - (void)setRuntimeInMinutes:(int)minutes;	// 0x37980d25
// declared property setter: - (void)setStudios:(id)studios;	// 0x37980d85
// declared property setter: - (void)setSynopsis:(id)synopsis;	// 0x37980df1
// declared property setter: - (void)setTheaterShowtimeSearchRegionDescription:(id)description;	// 0x37980e5d
// declared property setter: - (void)setTheaterShowtimes:(id)showtimes;	// 0x37980f29
// declared property setter: - (void)setTheatricalReleaseDate:(id)date;	// 0x37980fad
// declared property setter: - (void)setTrailerUri:(id)uri;	// 0x37981079
// declared property getter: - (id)studios;	// 0x37980d69
// declared property getter: - (id)synopsis;	// 0x37980dd5
// declared property getter: - (id)theaterShowtimeSearchRegionDescription;	// 0x37980e41
// declared property getter: - (id)theaterShowtimes;	// 0x37980ead
// declared property getter: - (id)theatricalReleaseDate;	// 0x37980f91
// declared property getter: - (id)trailerUri;	// 0x37980ffd
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x379810d9
@end


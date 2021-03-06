//
//  Enums.h
//  Place
//
//  Created by Iurii Oliiar on 3/28/13.
//  Copyright (c) 2013 Iurii Oliiar. All rights reserved.
//

#ifndef Place_Enums_h
#define Place_Enums_h

// keys for response
#define kTempDegrees @"Degrees"
#define kLocation    @"Location"
#define kRoutePoints @"Route"
#define kError       @"Error"
#define kDBName      @"Places"

//Enums

typedef enum {
    CategorySectionPlace,
    CategorySectionRoute,
    CategorySectionCount
} CategorySection;

typedef enum {
  CategoryOther,
  CategoryEntertainment,
  CategoryVisited,
  CategoryCount
} Category;

typedef enum {
    MenuRowMyPlaces,
    MenuRowSearch,
    MenuRowAddPlace,
    MenuRowAddRoute,
    MenuRowGoToMap,
    MenuRowCount
} MenuRow;

typedef enum {
    DescriptionRowCategory,
    DescriptionRowName,
    DescriptionRowComment,
    DescriptionRowDateVisited,
    DescriptionRowCount
} DescriptionRow;

typedef enum {
    RequestTypeWeather,
    RequestTypePlacemarkSearch,
    RequestTypeRoute,
    RequestTypeCount
} RequestType;

typedef enum {
    ResponseCodeOK,
    ResponseCodeError,
    ResponseCodeCount
} ResponseCode;

#endif

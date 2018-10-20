---
layout: page
title: Scoutlab Projekte 2018
category: Scoutlab Projekte 2018
nav: false
permalink: /scoutlab-2018/index
subdir: scoutlab-2018
---
# Scoutlab Projekte 2018


<div class="row">
  {% for item in site.data.featured-scoutlab2017 %}
  <div class="col-sm-3 col-md-3">
    <div class="thumbnail">
      <a href="{{item.url}}"><img  src="{{item.thumbnail}}" class="vcp-thumb" alt="{{item.title}}"></a>
      <div class="caption">
        <h3>{{item.title}}</h3>
        <p>{{item.description}}</p>
        <p><a href="{{item.url}}" class="btn btn-primary" role="button">{{item.title}}</a></p>
      </div>
    </div>
  </div>
  {% endfor %}

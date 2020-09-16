const RSS_URL = `https://www.vcp.de/pfadfinden/rubrik/scoutlab/feed/`;


fetch(RSS_URL)
  .then(response => response.text())
  .then(str => new window.DOMParser().parseFromString(str, "text/xml"))
  .then(data => {
    console.log(data)
    const items = data.querySelectorAll("item");
    let html = ``;
    for(i=0; i<3 && i<items.length ; i++){
        el = items[i]
        html += `
        <div class="col-sm-4 col-md-4">
        <div class="thumbnail">
          <div class="caption">
            <h3>${el.querySelector("title").innerHTML}</h3>
            <p>${el.querySelector("description").innerHTML.replace("<![CDATA[", "").replace("]]>", "")}</p>
            <a href="${el.querySelector("link").innerHTML}" class="btn btn-primary" role="button">Weiterlesen</a>
          </div>
        </div>
      </div>
      `;
    }
    $('#news').append(html)
  })
  